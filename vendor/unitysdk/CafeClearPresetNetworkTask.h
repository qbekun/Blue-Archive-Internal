#pragma once
#include "unitysdk.h"

namespace FlatData { class CafePresetType; }
namespace MX::NetworkProtocol { class Protocol; }

#define CAFECLEARPRESETNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F0EF90)
#define CAFECLEARPRESETNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F0F1D0)
#define CAFECLEARPRESETNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F0F1E0)
#define CAFECLEARPRESETNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F0F270)
#define CAFECLEARPRESETNETWORKTASK_GET_PRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1F0F280)
#define CAFECLEARPRESETNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F0F290)
#define CAFECLEARPRESETNETWORKTASK_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0x1F0F2A0)
#define CAFECLEARPRESETNETWORKTASK_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0x1F0F2B0)
#define CAFECLEARPRESETNETWORKTASK_SET_PRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1F0F2C0)

	inline static constexpr unsigned int CafeClearPresetNetworkTask_TypeDefinitionIndex = 2023;

	class CafeClearPresetNetworkTask : public Il2CppObject
	{
	public:
		::FlatData::CafePresetType* _PresetType_k__BackingField; // 0x40
		::System::Int32 _SlotId_k__BackingField; // 0x44

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECLEARPRESETNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECLEARPRESETNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECLEARPRESETNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECLEARPRESETNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::FlatData::CafePresetType* get_PresetType()
		{
			return ((::FlatData::CafePresetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECLEARPRESETNETWORKTASK_GET_PRESETTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECLEARPRESETNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SlotId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAFECLEARPRESETNETWORKTASK_SET_SLOTID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SlotId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFECLEARPRESETNETWORKTASK_GET_SLOTID_OFFSET))(nullptr);
		}

		::System::Void set_PresetType(::FlatData::CafePresetType* arg)
		{
			((::System::Void(*)(::FlatData::CafePresetType*, ::PVOID))((::PBYTE)hIl2Cpp + CAFECLEARPRESETNETWORKTASK_SET_PRESETTYPE_OFFSET))(arg, nullptr);
		}

	};

