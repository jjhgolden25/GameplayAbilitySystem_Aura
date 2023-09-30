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
	// BlueprintImplementableEvent : 함수는 헤더(.h)에서 구성되나, 함수 본문은 C++가 아닌 전적으로 블루프린트 그래프에서 작성됨.
	// 프로그래머가 아닌 사람이 예상된 기본 동작이 표준 동작이 없는 특수 상황에 대한 반응을 입맛대로 만들 수 있게 하기 위함.
	UFUNCTION(BlueprintImplementableEvent)
	void WidgetControllerSet();

};
