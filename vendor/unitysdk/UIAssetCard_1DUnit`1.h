#pragma once
#include "unitysdk.h"

class UIScrollView;

#define UIASSETCARD_1DUNIT`1_LOADUNIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD_1DUNIT`1_UPDATECONTENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD_1DUNIT`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int UIAssetCard_1DUnit`1_TypeDefinitionIndex = 4313;

	class UIAssetCard_1DUnit`1 : public Il2CppObject
	{
	public:
		::System::String* prefabPath; // 0x0
		Il2CppObject* cardUI; // 0x0

		::System::Void LoadUnit(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD_1DUNIT`1_LOADUNIT_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateContent(Il2CppObject* arg, ::System::Boolean arg2, ::System::Boolean arg3, UIScrollView* arg4)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::System::Boolean, UIScrollView*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD_1DUNIT`1_UPDATECONTENT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD_1DUNIT`1_.CTOR_OFFSET))(nullptr);
		}

	};

