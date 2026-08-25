#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;

#define UIGROUPBUFFELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0xBC0920)
#define UIGROUPBUFFELEMENT_GETCOLORTAG_OFFSET UNITYSDK_OFFSET(0xBC0C80)
#define UIGROUPBUFFELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xBC0C90)

	inline static constexpr unsigned int UIGroupBuffElement_TypeDefinitionIndex = 8619;

	class UIGroupBuffElement : public Il2CppObject
	{
	public:
		UITexture* schoolTexture; // 0x18
		UILabel* schoolName; // 0x20
		UILabel* effectTypeLabel; // 0x28
		Il2CppObject* effectValueLabels; // 0x30
		::System::String* color_Applied; // 0x38
		::System::String* color_NotAppled; // 0x40

		::System::Void SetData(Il2CppObject* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIGROUPBUFFELEMENT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetColorTag(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIGROUPBUFFELEMENT_GETCOLORTAG_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGROUPBUFFELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

