#pragma once
#include "unitysdk.h"

#define UIPOPUP_OPTION_ITEM_WITHSELECTOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2718A50)
#define UIPOPUP_OPTION_ITEM_WITHSELECTOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIPOPUP_OPTION_ITEM_WITHSELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x2718AA0)

	inline static constexpr unsigned int UIPopup_Option_Item_WithSelector_TypeDefinitionIndex = 7147;

	class UIPopup_Option_Item_WithSelector : public Il2CppObject
	{
	public:
		::System::Void Initialize(::System::Object* arg, ::System::Object* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_ITEM_WITHSELECTOR_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Initialize(::System::Object* arg, ::System::Collections::IList* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::System::Object*, ::System::Collections::IList*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_ITEM_WITHSELECTOR_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_ITEM_WITHSELECTOR_.CTOR_OFFSET))(nullptr);
		}

	};

