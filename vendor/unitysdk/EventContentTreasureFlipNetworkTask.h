#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTTREASUREFLIPNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F766C0)
#define EVENTCONTENTTREASUREFLIPNETWORKTASK_SET_ROUND_OFFSET UNITYSDK_OFFSET(0x1F766D0)
#define EVENTCONTENTTREASUREFLIPNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F766E0)
#define EVENTCONTENTTREASUREFLIPNETWORKTASK_SET_CELLS_OFFSET UNITYSDK_OFFSET(0x1F766F0)
#define EVENTCONTENTTREASUREFLIPNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F76700)
#define EVENTCONTENTTREASUREFLIPNETWORKTASK_GET_ROUND_OFFSET UNITYSDK_OFFSET(0x1F76A50)
#define EVENTCONTENTTREASUREFLIPNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F76A60)
#define EVENTCONTENTTREASUREFLIPNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F76A70)
#define EVENTCONTENTTREASUREFLIPNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F76A80)
#define EVENTCONTENTTREASUREFLIPNETWORKTASK_GET_CELLS_OFFSET UNITYSDK_OFFSET(0x1F76A90)
#define EVENTCONTENTTREASUREFLIPNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F76AA0)

	inline static constexpr unsigned int EventContentTreasureFlipNetworkTask_TypeDefinitionIndex = 2544;

	class EventContentTreasureFlipNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int32 _Round_k__BackingField; // 0x48
		Il2CppObject* _Cells_k__BackingField; // 0x50

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASUREFLIPNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_Round(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASUREFLIPNETWORKTASK_SET_ROUND_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASUREFLIPNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_Cells(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASUREFLIPNETWORKTASK_SET_CELLS_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASUREFLIPNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Int32 get_Round()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASUREFLIPNETWORKTASK_GET_ROUND_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASUREFLIPNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASUREFLIPNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASUREFLIPNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		Il2CppObject* get_Cells()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASUREFLIPNETWORKTASK_GET_CELLS_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASUREFLIPNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

