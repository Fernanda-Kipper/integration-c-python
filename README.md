## Conjectura de Collatz 📊
Esse projeto tem o objetivo de mostrar ao usuário o gráfico gerado apartir da Conjectura de Collatz
que é calculado através do número inicial fornecido pelo usuário.

### Integração C + Python
- Na linguagem C, criamos a função na qual é calculado os valores da conjectura a partir do número inicial
- Esse código foi exportado como uma library com extensão `.so` e para gerar o arquivo `.so` utilizamos o
próprio GCC
- Já em Python, usamos a biblioteca `ctypes` para auxiliar na importação da biblioteca em C e uso de suas funções
- no arquivo `plot.py` chamamos a função `calculate` que retorna um ponteiro para inteiro indicando a primeira posição do array que contém o tamanho total do array, e assim podemos saber em python o quanto devemos percorrer esse ponteiro para obter todos os números gerados
- Também no arquivo `plot.py` usamos a lib `matplotlib` para realizar o plot dos dados em um gráfico, o eixo X corresponde a contagem de números gerados e o eixo Y corresponde aos números gerados propriarmente.
- Por fim, chamamos a função `freeArray` exportada pela lib em C para liberar esse espaço de memória após seu uso, passando como parâmetro o ponteiro inicial.

### Como rodar

**Pré requisitos:**

- GCC instalado
- GNU Make instalado (normalmente ele acompanha na instalação do GCC)
- Python >= 2.7
- PIP >= 22.0

**Executando**

```bash
// na pasta do projeto
pip install ctypes
pip install matplotlib

make

python plot.py
```

### Colaboradores 🤝 


<table>
  <tr>
    <td align="center">
      <a href="#">
        <img src="https://avatars.githubusercontent.com/u/61896274?v=4" width="100px;" alt="Foto da Fernanda Kipper Github"/><br>
        <sub>
          <b>Fernanda Kipper</b>
        </sub>
      </a>
    </td>
    <td align="center">
      <a href="#">
        <img src="https://avatars.githubusercontent.com/u/88754301?v=4" width="100px;" alt="Foto do Vinicius Perruzi"/><br>
        <sub>
          <b>Vinicius Perruzi</b>
        </sub>
      </a>
    </td>
  </tr>
</table>
