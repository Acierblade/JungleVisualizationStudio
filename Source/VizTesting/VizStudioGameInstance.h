#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "VizStudioGameInstance.generated.h"

UCLASS()
class VIZTESTING_API UVizStudioGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
		ULocalPlayer * RequestLocalPlayer(int32 ControllerId, FString& OutError, bool bSpawnActor);
};