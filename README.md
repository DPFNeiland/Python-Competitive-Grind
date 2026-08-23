# Laboratório de Algoritmos e Programação Competitiva

Repositório pessoal de estudos, implementações e resolução de problemas de programação. O projeto reúne códigos em **Python**, **C++** e em qualquer outra linguagem que venha a ser usada nos treinos.

O foco não é uma linguagem específica, mas o desenvolvimento de lógica, domínio de algoritmos, estruturas de dados e técnicas de programação competitiva.

## Sobre o repositório

Este espaço é usado para:

- estudar fundamentos de programação;
- implementar algoritmos e estruturas de dados;
- comparar soluções em linguagens diferentes;
- resolver exercícios de juízes online;
- treinar para olimpíadas, maratonas e contests;
- registrar experimentos e materiais de consulta.

Os códigos são, em sua maioria, independentes. Cada arquivo pode representar uma solução, um exercício, uma implementação de referência ou um teste de algum conceito.

## Linguagens

Atualmente, o repositório contém principalmente:

- Python;
- C++.

Novas linguagens podem ser adicionadas conforme os estudos avançarem. A organização usa uma pasta por linguagem, portanto não é necessário alterar a estrutura geral do projeto para incluir Java, Rust, Go ou qualquer outra tecnologia.

## Estrutura do repositório

```text
.
├── Algoritmos/                 # implementações e exercícios de algoritmos
├── Competições/                # provas e soluções organizadas por competição
│   ├── MaratonaBrasileira/
│   ├── MaratonaPaulista/
│   └── OBI/
├── Estudos/                    # conteúdo organizado por assunto e linguagem
│   ├── AlgoritmosGulosos/
│   ├── Array/
│   ├── Bitmask/
│   ├── BuscaBinaria/
│   ├── Divisibilidade/
│   ├── EstruturasCondicionais/
│   ├── EstruturasDeDados/
│   ├── FuncoesERecursividade/
│   ├── Fundamentos/
│   ├── Grafos/
│   ├── Loops/
│   ├── Matrizes/
│   ├── Ordenacao/
│   └── ProgramacaoDinamica/
├── Noic/                       # materiais e exercícios de cursos do NOIC
└── Problems/                   # soluções agrupadas por plataforma
    ├── Atcoder/
    ├── BeeCrowd/
    ├── Codeforces/
    ├── NepsAcademy/
    ├── Online Judge/
    ├── Spoj/
    └── Treino/
```

### Organização por linguagem

Dentro de cada assunto, plataforma ou competição, os arquivos devem ser separados pela linguagem utilizada:

```text
Assunto/
├── cpp/
├── python/
└── outra-linguagem/
```

Exemplo:

```text
Estudos/
└── Grafos/
    ├── cpp/
    │   └── Dijkstra.cpp
    └── python/
        └── Dijsktra.py
```

Uma pasta de linguagem só precisa existir quando houver conteúdo correspondente.

## Conteúdo principal

- `Algoritmos`: implementações, exercícios introdutórios e estudos de eficiência.
- `Estudos`: códigos separados por assunto e, dentro de cada assunto, por linguagem.
- `Problems`: soluções de plataformas como AtCoder, beecrowd, Codeforces, Neps Academy e SPOJ.
- `Competições`: materiais e soluções da OBI, Maratona Brasileira de Programação e Maratona Paulista.
- `Noic`: exercícios e anotações relacionados aos cursos e trilhas do NOIC.

## Como executar

Os exemplos abaixo consideram que o terminal está aberto na raiz do repositório.

### Python

```bash
python "Estudos/Ordenacao/python/QuickSort.py"
```

### C++

Compile o arquivo:

```bash
g++ -std=c++17 -O2 -Wall -Wextra "Estudos/Grafos/cpp/Dijkstra.cpp" -o programa
```

Depois, execute o programa:

```bash
./programa
```

No PowerShell do Windows, o último comando pode ser executado como:

```powershell
.\programa.exe
```

Outras linguagens podem ser executadas ou compiladas com suas respectivas ferramentas.

## Entrada e saída

As soluções de programação competitiva normalmente:

- leem os dados da entrada padrão;
- escrevem apenas a resposta esperada na saída padrão;
- seguem o formato definido no enunciado;
- evitam mensagens adicionais que possam causar erro de apresentação no juiz online.

Exemplo de redirecionamento de entrada:

```bash
python caminho/para/solucao.py < entrada.txt
```

## Como adicionar novos conteúdos

1. Escolha a área adequada: `Estudos`, `Problems`, `Competições`, `Algoritmos` ou `Noic`.
2. Localize ou crie a pasta do assunto, plataforma ou competição.
3. Coloque o arquivo dentro da pasta da linguagem utilizada.
4. Use nomes que ajudem a identificar o algoritmo, exercício ou número do problema.
5. Evite adicionar executáveis, arquivos temporários e resultados de compilação.

Para uma nova linguagem, basta criar uma pasta com seu nome em letras minúsculas:

```text
Estudos/Ordenacao/rust/
Problems/Atcoder/java/
Competições/OBI/2026/go/
```

## Objetivos de aprendizagem

O repositório apoia a prática de:

- lógica de programação;
- análise de complexidade;
- algoritmos clássicos;
- estruturas de dados;
- técnicas de otimização;
- resolução de problemas sob limite de tempo e memória;
- adaptação de soluções entre diferentes linguagens;
- preparação para competições e processos seletivos técnicos.

## Observações

- Alguns arquivos são experimentos ou rascunhos de estudo e podem estar incompletos.
- As soluções refletem o aprendizado no momento em que foram escritas e podem receber melhorias.
- Alguns diretórios antigos ainda podem seguir convenções diferentes e serão ajustados gradualmente.
- Enunciados e materiais em PDF são mantidos apenas como referência de estudo.

## Autor

Rodrigo Neiland
