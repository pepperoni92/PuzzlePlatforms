// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MenuWidget.h"
#include "InGameMenu.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMS_API UInGameMenu : public UMenuWidget
{
	GENERATED_BODY()

protected:
	virtual bool Initialize() override;
	
public:
	UPROPERTY(meta = (BindWidget))
	class UButton* ReturnButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* QuitButton;

private:
	UFUNCTION()
	void OnCancelClicked();

	UFUNCTION()
	void OnQuitClicked();
};
