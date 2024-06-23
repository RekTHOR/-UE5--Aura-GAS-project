// Copyright GameChangerzZz


#include "Character/AuraEnemy.h"

AAuraEnemy::AAuraEnemy()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AAuraEnemy::HighlightActor()
{
	bHightlighted = true;
}

void AAuraEnemy::UnHightlightActor()
{
	bHightlighted = false;
}

void AAuraEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bHightlighted)
	{
		DrawDebugSphere(GetWorld(), GetActorLocation(), 50.f, 12, FColor::Red);
	}
}
