// Copyright JJH

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AuraUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UAuraUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void SetWidgetController(UObject* InWidgetController);

	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UObject> WidgetController;

protected:
	// BlueprintImplementableEvent : �Լ��� ���(.h)���� �����ǳ�, �Լ� ������ C++�� �ƴ� �������� �������Ʈ �׷������� �ۼ���.
	// ���α׷��Ӱ� �ƴ� ����� ����� �⺻ ������ ǥ�� ������ ���� Ư�� ��Ȳ�� ���� ������ �Ը���� ���� �� �ְ� �ϱ� ����.
	UFUNCTION(BlueprintImplementableEvent)
	void WidgetControllerSet();

};
