/* 1. Diga a ordem de cálculo dos operadores em cada uma das instruções em C a seguir e mostre o valor
de x depois que cada instrução for executada.
• x = 7 + 3*6/2-l
• x = 2%2 + 2*2-2/2
• x = (3 * 9 * (3 + (9*3/ (3) ) ) ); */
// //  //  /  //  //  //
// //  //  /  //  //  //

// Instruções para se fazer os cálculos:

// • x = 7 + 3*6/2-l

// 1- Seguimos a ordem, da esquerda para direita, das operações com uma maior prioridade (neste caso, a multiplicação e a divisão)
// 2- Calculando a multiplicação, tem-se (3*6 = 18) e depois a divisão (18/2 = 9)
// 3- Resolvendo o que restou (7 + 9-1) em partes (7 +) e (9-1 = 8)
// 4- (7 + 8) = 15, resultado final de x.
// //  //  /  //  //  //// //  //  /  //  //  //


//• x = 2%2 + 2*2-2/2

// 1- Resolvemos o módulo de 2%2 (resto 0, logo módulo = 0)
// 2- Calculando a multiplicação (ordem de prioridade, 2 * 2 = 4) 
// 3- Resolvendo a divisão (-2 / 2 = -1)
// 4- Resolvendo o que restou (0 + 4 - 1) = 3, resultado final de x
// //  //  /  //  //  //// //  //  /  //  //  //


//• x = (3 * 9 * (3 + (9*3/ (3) ) ) )

// 1- Seguimos a ordem de prioridade dos parentêses e vamos excluindo-os, da seguinte forma (3 * 9 * (3 + (9*3/3 ) ) )
// 2- Agora, temos o cálculo (9*3/3) para resolver, da esquerda para direita (9 * 3 = 27) e (27 / 3 = 9)
// 3- Retirando o parentêse novamente, (3 * 9 * (3 + 9 ) ) temos o cálculo (3 + 9 = 12)
// 4- Finalmente, retiramos o último parentêse, ficando (3 * 9 * 12), resultando em 324.
// //  //  /  //  //  //// //  //  /  //  //  //
