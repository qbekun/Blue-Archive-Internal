#pragma once
#include "unitysdk.h"

class RaidDifficultyFilter;

#define UIRAIDDIFFICULTYFILTERBUTTON_INVOKEDISABLECALLBACK_OFFSET UNITYSDK_OFFSET(0x278A930)
#define UIRAIDDIFFICULTYFILTERBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x278A950)
#define UIRAIDDIFFICULTYFILTERBUTTON_GETFILTERVALUE_OFFSET UNITYSDK_OFFSET(0x278AC20)
#define UIRAIDDIFFICULTYFILTERBUTTON_SETAVAILABLE_OFFSET UNITYSDK_OFFSET(0x278AC30)
#define UIRAIDDIFFICULTYFILTERBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x278AC50)
#define UIRAIDDIFFICULTYFILTERBUTTON_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x278AC60)

	inline static constexpr unsigned int UIRaidDifficultyFilterButton_TypeDefinitionIndex = 7418;

	class UIRaidDifficultyFilterButton : public Il2CppObject
	{
	public:
		RaidDifficultyFilter* DifficultyFilter; // 0x38
		::System::Boolean IsLiveDifficulty; // 0x3C
		Il2CppObject* DisableAnotherFilterCallback; // 0x40

		::System::Void InvokeDisableCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDDIFFICULTYFILTERBUTTON_INVOKEDISABLECALLBACK_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDDIFFICULTYFILTERBUTTON_AWAKE_OFFSET))(nullptr);
		}

		RaidDifficultyFilter* GetFilterValue()
		{
			return ((RaidDifficultyFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDDIFFICULTYFILTERBUTTON_GETFILTERVALUE_OFFSET))(nullptr);
		}

		::System::Void SetAvailable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDDIFFICULTYFILTERBUTTON_SETAVAILABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDDIFFICULTYFILTERBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDDIFFICULTYFILTERBUTTON_SETCALLBACK_OFFSET))(arg, nullptr);
		}

	};

