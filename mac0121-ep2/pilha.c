#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include <string.h>


/* Funcoes pilha */
pilha * cria (int tam) {
  pilha * p = malloc(sizeof(pilha));
  p->tam = tam;
  p->topo = 0;
  p->v = malloc (tam * sizeof(item));
  if (p->v == NULL)
	return NULL;
  return p;
}

void destroi (pilha * p) {
  free (p->v);
  free (p);
}

void empilha (pilha * p, item x) {
  if (p->topo == p->tam)
	p = resize (p);
  p->v[p->topo] = x;
  p->topo ++;
}

item desempilha (pilha * p) {
  if (!pilhaVazia (p)){
	p->topo --;
	return (p->v[p->topo]);
  }
}

int pilhaVazia (pilha * p) {
  return (p->topo == 0);
}

item topoDaPilha (pilha *p) {
  if (!pilhaVazia(p)){
	return (p->v[p->topo - 1]);
  }
  return ERRO
}

/* dobra o tamanho da pilha */
pilha * resize (pilha * p) {
	pilha * q = cria (p->tam * 2);
	int i;
	for (i = 0; i < p->topo; i++)
		q->v[i] = p->v[i];
	q->topo = p->topo;
	destroi (p);
	return (q);
}



/* Funcoes palavra-cruzada */

void lePalavras(palavra *vocab, int npal, int tampal){
	int i;
	char pal[46];

	for (i = 0; i < npal; i++){
		scanf("%s", pal);
		vocab[i]->string = pal
		vocab[i]->tam = strlen(pal);
		
	}
}

void destroiVocab(vocab *voc){
	free(voc->v);
	free(voc);
}