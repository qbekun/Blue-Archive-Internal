#pragma once
#include "unitysdk.h"

class UIWidget;
class UIGrid;

#define UICAFECHARACTERLIST_ONSTARTGIVEGIFTPROCESS_OFFSET UNITYSDK_OFFSET(0x2275F20)
#define UICAFECHARACTERLIST_SETDATA_OFFSET UNITYSDK_OFFSET(0x2273620)
#define UICAFECHARACTERLIST_GET_HOVERCHARACTERCARDS_OFFSET UNITYSDK_OFFSET(0x227CBD0)
#define UICAFECHARACTERLIST_ONGIVEPROCESSEND_OFFSET UNITYSDK_OFFSET(0x2274170)
#define UICAFECHARACTERLIST_ONPRESENTHOVERED_OFFSET UNITYSDK_OFFSET(0x2277D40)
#define UICAFECHARACTERLIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x227CBE0)
#define UICAFECHARACTERLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x227CD60)

	inline static constexpr unsigned int UICafeCharacterList_TypeDefinitionIndex = 4651;

	class UICafeCharacterList : public Il2CppObject
	{
	public:
		UIWidget* backgroundWidget; // 0x18
		UIGrid* characterCardGrid; // 0x20
		::Il2CppArray<::System::Object*>* characterCards; // 0x28
		::System::Int32 bgMinWidth; // 0x30
		::System::Int32 cardInterval; // 0x34
		Il2CppObject* hoveredCards; // 0x38

		::System::Void OnStartGiveGiftProcess()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERLIST_ONSTARTGIVEGIFTPROCESS_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERLIST_SETDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_HoverCharacterCards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERLIST_GET_HOVERCHARACTERCARDS_OFFSET))(nullptr);
		}

		::System::Void OnGiveProcessEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERLIST_ONGIVEPROCESSEND_OFFSET))(nullptr);
		}

		::System::Void OnPresentHovered(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERLIST_ONPRESENTHOVERED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERLIST_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFECHARACTERLIST_.CTOR_OFFSET))(nullptr);
		}

	};

