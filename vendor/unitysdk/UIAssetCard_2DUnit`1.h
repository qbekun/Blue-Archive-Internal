#pragma once
#include "unitysdk.h"

class UIScrollView;

#define UIASSETCARD_2DUNIT`1_LOADUNIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD_2DUNIT`1_GET_SHOWREPRESENTATIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD_2DUNIT`1_CREATECARDUIS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD_2DUNIT`1_SET_SHOWREPRESENTATIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD_2DUNIT`1_ONASSETCARDINSTANTIATED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD_2DUNIT`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETCARD_2DUNIT`1_UPDATECONTENT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int UIAssetCard_2DUnit`1_TypeDefinitionIndex = 4315;

	class UIAssetCard_2DUnit`1 : public Il2CppObject
	{
	public:
		::System::Int32 CardWidth; // 0x0
		::System::String* cardPrefabPath; // 0x0
		Il2CppObject* cardUIList; // 0x0
		Il2CppObject* unit; // 0x0
		::System::Boolean _ShowRepresentative_k__BackingField; // 0x0

		::System::Void LoadUnit(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD_2DUNIT`1_LOADUNIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ShowRepresentative()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD_2DUNIT`1_GET_SHOWREPRESENTATIVE_OFFSET))(nullptr);
		}

		::System::Void CreateCardUIs(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD_2DUNIT`1_CREATECARDUIS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_ShowRepresentative(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD_2DUNIT`1_SET_SHOWREPRESENTATIVE_OFFSET))(arg, nullptr);
		}

		::System::Void OnAssetCardInstantiated(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD_2DUNIT`1_ONASSETCARDINSTANTIATED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD_2DUNIT`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateContent(Il2CppObject* arg, ::System::Boolean arg2, Il2CppObject* arg3, ::System::Int32 arg4, UIScrollView* arg5)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, Il2CppObject*, ::System::Int32, UIScrollView*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETCARD_2DUNIT`1_UPDATECONTENT_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};

