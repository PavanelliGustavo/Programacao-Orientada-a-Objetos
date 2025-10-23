# ESPECIFICAÇÃO DO TRABALHO PRÁTICO

---

## 1. ATIVIDADES A REALIZAR

1.  Projetar, codificar e documentar classes **domínio** (domain classes).
2.  Projetar, codificar e documentar classes **entidade** (entity classes).
3.  Construir modelo de arquitetura do software, codificar e documentar as **interfaces** entre os módulos.
4.  Projetar e codificar a **camada de apresentação**.
5.  Projetar e codificar a **camada de serviço**.
6.  Criar vídeo que demonstre a execução com sucesso de **teste fumaça** (smoke test) do código integrado.

---

## 2. REQUISITOS FUNCIONAIS DO SISTEMA DE SOFTWARE

O sistema de software visa facilitar a **gestão de pequenos hotéis**.

### Acesso e Autenticação

* Para usar o sistema, o **gerente deve criar uma conta**.
* Após criar uma conta, deve ser **autenticado** informando o seu **email** e a sua **senha**.
* Após ser autenticado, o gerente pode acessar os serviços disponibilizados pelo sistema.

### Serviços Disponibilizados (CRUD e Listagem)

O gerente pode realizar as seguintes ações:

* **Conta (Gerente)**: ler, editar e excluir conta.
* **Hotel**: criar, ler, editar e excluir hotel.
* **Quarto**: criar, ler, editar e excluir quarto.
* **Reserva**: criar, ler, editar e excluir reserva.
* **Hóspede**: criar, ler, editar e excluir hóspede.
* **Listagens**:
    * Listar hotéis (apresenta dados de cada hotel).
    * Listar quartos (apresenta dados de cada quarto).
    * Listar reservas (apresenta dados de cada reserva).
    * Listar hóspedes (apresenta dados de cada hóspede).

### Regras de Negócio e Integridade

* Não podem ocorrer **conflitos entre reservas**.
* Não é possível **editar dado que identifica registro (chave primária)**.
* O sistema deve assegurar as **multiplicidades** informadas no diagrama de classes.
* O sistema não deve possibilitar **exclusões que resultem em inconsistências**.

### Domínios e Formato Válido

| NOME | FORMATO VÁLIDO |
| :--- | :--- |
| **Capacidade** | 1, 2, 3 ou 4 |
| **Cartão** | 16 dígitos. Presença de **dígito verificador** calculado segundo o **algoritmo de Luhn**. |
| **Código** | 10 caracteres. Cada caracter é letra (a-z) ou dígito (0-9). |
| **Data** | dia-mês-ano. Dia: número de 1 a 31. Mês: JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV ou DEZ. Ano: número de **2000 a 2999**. Deve ser válida considerando os anos **bissextos**. |
| **Dinheiro** | 0,01 a 1.000.000,00. Armazenamento deve ser em **inteiro** para evitar erro de arredondamento. |
| **EMAIL** | **parte-local@domínio**. Requisitos detalhados para parte-local (max 64 caracteres) e domínio (max 255 caracteres). |
| **Endereço** | Texto com 5 a 30 caracteres. Caracter pode ser letra (a-z ou A-Z), dígito (0-9), vírgula, ponto ou espaço em branco; vírgula não pode ser seguida por vírgula ou ponto; ponto não pode ser seguido por vírgula ou ponto; espaço em branco é seguido por letra ou dígito; primeiro e último caracter não pode ser vírgula, ponto ou espaço em branco. |
| **Nome** | Texto com **5 a 20 caracteres**. Cada caracter pode ser letra (a-z ou A-Z) ou espaço em branco. Primeiro caracter de cada termo é letra maiúscula (A-Z). Espaço em branco é seguido por letra. Último caracter não pode ser espaço em branco. |
| **Número** | 001 a 999. |
| **Ramal** | 00 a 50. |
| **Senha** | **5 caracteres**. Caracter pode ser letra (a-z ou A-Z), dígito (0-9) ou caracter especial (!"#$%&?); letra não pode ser seguida por letra, dígito não pode ser seguido por dígito; existe pelo menos **uma letra minúscula**, **uma letra maiúscula**, **um dígito** e **um caracter especial**. |
| **Telefone** | `+DDDDDDDDDDDDDD` (D é dígito 0-9). |

---

## 3. REQUISITOS NÃO FUNCIONAIS DO SISTEMA DE SOFTWARE

### Arquitetura de Software

1.  Adotar o estilo de arquitetura em **camadas (layers)**.
2.  A arquitetura deve ser composta por **camada de apresentação** e por **camada de serviço**.
3.  A camada de apresentação deve ser responsável pela **interface com o usuário** e pela **validação dos dados de entrada**.
4.  A camada de serviço deve ser responsável pela **lógica de negócio** e por **armazenar dados**.
5.  Cada camada deve ser decomposta em **módulos de software**.
6.  Módulos devem interagir por meio de **serviços especificados em interfaces**.
7.  Módulos de software devem ser decompostos em **classes**.
8.  A arquitetura deve ser composta por **ao menos quatro módulos**.
9.  Devem ser implementadas classes que representem **domínios, entidades, controladoras e contêiners**.

### Implementação e Ambiente

1.  Implementar o código na **linguagem de programação C++**.
2.  Prover projeto compatível com o ambiente de desenvolvimento **Code::Blocks**.
3.  Nas implementações dos códigos de validação **não é necessário considerar acentuação e nem letra ç**.

---

## 4. REQUISITOS DO TRABALHO

### Equipe e Documentação

1.  Trabalho pode ser realizado individualmente ou por equipe com **até quatro participantes**.
2.  Adotar um **padrão de codificação** (coding standard).
3.  Prover arquivo com **identificação de cada membro da equipe** e identificações de **artefatos que cada membro construiu**.
4.  Desenvolver o sistema de software segundo os requisitos funcionais e não funcionais especificados.

### Classes Domínio

1.  Cada classe domínio deve conter atributo que seja instância de **tipo suportado pela linguagem de programação**.
2.  Cada classe domínio deve permitir acesso ao atributo por meio de **métodos públicos `set` e `get`**.
3.  Método `set` de cada classe domínio deve **lançar exceção** em caso de formato inválido.

### Classes Entidade

1.  Cada classe entidade deve conter atributos onde cada atributo é instância de **classe domínio**.
2.  Cada classe entidade deve permitir acesso aos atributos por meio de **métodos públicos `set` e `get`**.

### Modelo de Arquitetura e Interfaces

1.  Modelo de arquitetura deve conter **diagrama** composto por módulos, interfaces entre módulos e relacionamentos.
2.  Diagrama integrante do modelo de arquitetura deve ser construído usando a **linguagem de modelagem UML**.
3.  Modelo de arquitetura deve conter **descrições textuais** das responsabilidades de cada módulo.
4.  Fornecer modelo de arquitetura de software em **arquivo PDF**.
5.  Declarar em código as interfaces entre módulos por meio de **classes abstratas**.
6.  Classes abstratas devem ser compostas por **métodos virtuais puros**.

### Documentação (Doxygen)

1.  Documentar cada classe (domínios, entidades, interfaces etc.) em HTML usando a ferramenta **Doxygen**.
2.  Documentar as classes segundo **perspectiva dos usuários das classes**.
3.  Fornecer as páginas **HTML geradas pela ferramenta Doxygen**.

### Camada de Apresentação

1.  Camada de apresentação deve depender de **serviços relacionados em interfaces declaradas**.
2.  Pode ser codificada usando **`cin` e `cout`**, **PDCurses** ou **interface gráfica**.
3.  Entre as classes da camada de apresentação devem existir **classes controladoras**.

### Camada de Serviço

1.  Camada de serviço deve **implementar serviços** relacionados em interfaces declaradas.
2.  Pode **armazenar os objetos em estrutura de dados em memória** (fila, pilha etc.).
3.  Pode **armazenar os objetos em banco de dados relacional usando o produto SQLite**.
4.  Entre as classes da camada de serviço devem existir **classes controladoras e classes contêiners**.

### Entrega e Teste

1.  Fornecer **vídeo que demonstre teste fumaça (smoke test)** e a execução com sucesso do código integrado.
2.  No teste fumaça, deve haver um **caso de teste para cada funcionalidade** presente nos requisitos funcionais.
3.  Cada caso de teste deve contemplar um **cenário de sucesso**.
4.  Fornecer projeto **Code::Blocks** que possibilite compilar e executar os códigos sem erros na plataforma de correção.
5.  Fornecer os códigos em **formato fonte e em formato executável**.
6.  Incluir todos os artefatos construídos em um **arquivo zip**.
7.  Nome do arquivo zip: `T1-TP1-X-Y-Z.ZIP`, onde X, Y e Z são os **números de matrícula dos autores**.
8.  Testar se o arquivo pode ser descompactado com sucesso e se **não há vírus** no arquivo.
9.  **Enviar o arquivo dentro do prazo**.

---

## 5. ELEMENTOS DO SISTEMA DE SOFTWARE

Estrutura em camadas (vide diagrama na página 3):

* APRESENTAÇÃO
* SERVIÇO
* Módulos de Armazenamento/Contêineres:
    * GERENTES
    * HÓSPEDES
    * HOTEIS
    * QUARTOS
    * RESERVAS

---

## 6. CRITÉRIOS DE AVALIAÇÃO

| ITEM | CRITÉRIO | % ACERTO |
| :--- | :--- | :--- |
| **1 (Domínios)** | Cada domínio é uma classe. Cada classe contém métodos `set` e `get` públicos. Cada método `set` lança exceção se formato de valor de parâmetro é inválido. Cada classe e membro documentado por texto descritivo. Provida documentação em formato HTML. | 0, 25, 50, 75, 100 |
| **2 (Entidades)** | Cada entidade é uma classe. Cada classe contém atributos que são instâncias de domínios. Cada atributo é acessível por métodos `set` e `get` públicos. Cada classe e membro documentado por texto descritivo. Provida documentação em formato HTML. | 0, 25, 50, 75, 100 |
| **3 (Arquitetura)** | Diagrama contém módulos, interfaces e relacionamentos. Linguagem UML usada. Provida descrição textual do propósito de cada módulo. Provida declaração de interface por classe abstrata. Cada classe e membro documentado por texto descritivo. Provida documentação em formato HTML. | 0, 25, 50, 75, 100 |
| **4 (Apresentação)** | Providas classes contendo código responsável por interface com o usuário e validação de dados de entrada. Classes dependem de interfaces de serviços providos pela camada de negócio. Cada classe e membro documentado por texto descritivo. Provida documentação em formato HTML. | 0, 25, 50, 75, 100 |
| **5 (Serviço)** | Providas classes contendo código responsável por lógica de negócio e armazenamento de dados. Classes realizam interfaces de serviços providos pela camada de negócio. Cada classe e membro documentado por texto descritivo. Provida documentação em formato HTML. | 0, 25, 50, 75, 100 |
| **6 (Teste Fumaça)** | Fornecido vídeo que demonstra teste fumaça. Teste fumaça é composto por caso de teste de sucesso para cada funcionalidade. Teste fumaça executa com sucesso o código integrado do sistema. | 0, 25, 50, 75, 100 |
