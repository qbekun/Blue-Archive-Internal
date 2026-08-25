#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CRAFTAUTOBEGINPROCESSNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F38AB0)
#define CRAFTAUTOBEGINPROCESSNETWORKTASK_GET_PRESETSLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1F38AC0)
#define CRAFTAUTOBEGINPROCESSNETWORKTASK_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x1F38AD0)
#define CRAFTAUTOBEGINPROCESSNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F38AE0)
#define CRAFTAUTOBEGINPROCESSNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F38E20)
#define CRAFTAUTOBEGINPROCESSNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F38E30)
#define CRAFTAUTOBEGINPROCESSNETWORKTASK_SET_PRESETSLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1F38EC0)
#define CRAFTAUTOBEGINPROCESSNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F38ED0)
#define CRAFTAUTOBEGINPROCESSNETWORKTASK_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1F38F60)

	inline static constexpr unsigned int CraftAutoBeginProcessNetworkTask_TypeDefinitionIndex = 2286;

	class CraftAutoBeginProcessNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _Count_k__BackingField; // 0x40
		::System::Int32 _PresetSlotIndex_k__BackingField; // 0x48

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTAUTOBEGINPROCESSNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Int32 get_PresetSlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTAUTOBEGINPROCESSNETWORKTASK_GET_PRESETSLOTINDEX_OFFSET))(nullptr);
		}

		::System::Void set_Count(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTAUTOBEGINPROCESSNETWORKTASK_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTAUTOBEGINPROCESSNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTAUTOBEGINPROCESSNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTAUTOBEGINPROCESSNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_PresetSlotIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CRAFTAUTOBEGINPROCESSNETWORKTASK_SET_PRESETSLOTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTAUTOBEGINPROCESSNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_Count()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CRAFTAUTOBEGINPROCESSNETWORKTASK_GET_COUNT_OFFSET))(nullptr);
		}

	};

