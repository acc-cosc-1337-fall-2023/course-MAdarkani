//add include statements
#include "func.h"
//add function code here


double get_gc_content(const std::string& dna)
{
    double gc_content = 0;

    for (int i = 0; i < dna.size(); i++)
    {
        if(dna[i]=='C' || dna[i]=='G')
            gc_content++;
        
    }

    return gc_content/dna.size();
    
}



std::string reverse_string (std::string dna)
{
    std::string r_string;

    for (int i = dna.size()-1; i >= 0 ; i--)
    {
        r_string += dna[i];
    }
    
    return r_string;

}


std::string get_dna_complement (std::string dna)
{
    std::string complement = reverse_string(dna);
    for (int i = 0; i < complement.size(); i++)
    {
        if (complement[i] == 'A')
            complement[i] = 'T';
        else if (complement[i] == 'T')
            complement[i] = 'A';
        else if (complement[i] == 'G')
            complement[i] = 'C';
        else if (complement[i] == 'C')
            complement[i] = 'G';

    }
    
    return complement;

}


