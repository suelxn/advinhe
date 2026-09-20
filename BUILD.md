# BUILD.md - Guia de Compilação e Execução

## Pré-requisitos

Antes de compilar, certifique-se de ter instalado:

- **GCC** (compilador C)
- **Make** (ferramenta de build)
- **libcivetweb-dev** (biblioteca CivetWeb)

### Instalação das dependências

#### Ubuntu/Debian:
```bash
sudo apt-get update
sudo apt-get install build-essential libcivetweb-dev
```

#### macOS:
```bash
brew install gcc make civetweb
```

#### Fedora/CentOS:
```bash
sudo dnf install gcc make civetweb-devel
```

---

## Compilação

### Usar o Makefile

Para compilar o projeto, execute na raiz do diretório:

```bash
make
```

Isso irá:
- Compilar `src/main.c`
- Compilar `src/game.c`
- Compilar `lib/civetweb/src/civetweb.c`
- Gerar o executável `jogo`

---

## Execução

Depois de compilar, execute o programa com:

```bash
./jogo
```

## Limpeza

Para remover o executável compilado:

```bash
make clean
```

Isso removerá o arquivo `jogo`, deixando o código-fonte intacto.

---

## Troubleshooting

### Erro: "arquivo ou diretório inexistente"

**Solução:** Certifique-se de estar no diretório raiz do projeto antes de executar:

```bash
cd /home/suelen/Documentos/Projetos/advinhe
./jogo
```

### Erro: "command not found: make"

**Solução:** Instale o Make:

```bash
sudo apt-get install make
# ou
brew install make
```

### Erro: "civetweb.h: No such file or directory"

**Solução:** Instale a biblioteca CivetWeb:

```bash
sudo apt-get install libcivetweb-dev
# ou
brew install civetweb
```

### Warnings durante compilação

É normal receber warnings sobre variáveis não utilizadas no CivetWeb. Eles não afetam a funcionalidade do programa e podem ser ignorados.

---

## Notas Importantes

- O número secreto está definido como `42` em `src/game.h`
- O programa usa a biblioteca CivetWeb, que está incluída no diretório `lib/civetweb/`
- O executável é gerado com as flags de segurança: `-Wall -Wextra`
- O programa requer as bibliotecas do sistema: `pthread`, `dl`, `ssl`, e `crypto`

---
