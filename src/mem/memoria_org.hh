#pragma once

#include <iostream>


struct MemoriaOrg {
    MemoriaOrg(
            int tamanho_do_bloco,
            int associatividade,
            int tamanho_da_cache
            ) {
        // TODO
    }


    bool acessa(uint32_t addr) {
        // TODO
        std::cout << "@" << addr << '\n';

        return true;
    }
};
