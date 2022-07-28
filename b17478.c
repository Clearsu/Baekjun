/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b17478.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jincpark <jincpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:03:58 by jincpark          #+#    #+#             */
/*   Updated: 2022/07/28 15:57:09 by jincpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print____(int n)
{
	while (n-- > 0)
		printf("____");
}

void	recul_chat_bot(int n, int m)
{
	if (n == 0)
	{
		print____(m);
		printf("\"재귀함수가 뭔가요?\"\n");
		print____(m);
		printf("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
		print____(m);
		printf("라고 답변하였지.\n");
		return ;
	}
	else
	{
		print____(m);
		printf("\"재귀함수가 뭔가요?\"\n");
		print____(m);
		printf("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
		print____(m);
		printf("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
		print____(m);
		printf("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n");
		recul_chat_bot(n - 1, m + 1);
	}
	print____(m);
	printf("라고 답변하였지.\n");
}

int	main(void)
{
	int	n;

	scanf("%d", &n);
	printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
	recul_chat_bot(n, 0);
	return (0);
}
