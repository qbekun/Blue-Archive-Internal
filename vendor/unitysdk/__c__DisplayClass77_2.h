#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentCollectionInfo; }
class UIEventLobby;
class UIEventCGObjectPopup;

#define <>C__DISPLAYCLASS77_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x2444960)
#define <>C__DISPLAYCLASS77_2__ONOPENED_B__8_OFFSET UNITYSDK_OFFSET(0x2444970)
#define <>C__DISPLAYCLASS77_2__ONOPENED_B__9_OFFSET UNITYSDK_OFFSET(0x2444990)

	inline static constexpr unsigned int <>c__DisplayClass77_2_TypeDefinitionIndex = 5523;

	class <>c__DisplayClass77_2 : public Il2CppObject
	{
	public:
		::System::Int64 collectionID; // 0x10
		::MX::Data::EventContentCollectionInfo* matchedCollectionInfo; // 0x18
		UIEventLobby* __4__this; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS77_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _OnOpened_b__8(::MX::Data::EventContentCollectionInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::EventContentCollectionInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS77_2__ONOPENED_B__8_OFFSET))(arg, nullptr);
		}

		::System::Void _OnOpened_b__9(UIEventCGObjectPopup* arg)
		{
			((::System::Void(*)(UIEventCGObjectPopup*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS77_2__ONOPENED_B__9_OFFSET))(arg, nullptr);
		}

	};

