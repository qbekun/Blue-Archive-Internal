#pragma once
#include "unitysdk.h"

namespace FlatData { class CafePresetType; }
namespace MX::NetworkProtocol { class Protocol; }

#define CAFERENAMEPRESETNETWORKTASK_GET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0x1F14270)
#define CAFERENAMEPRESETNETWORKTASK_SET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0x1F14280)
#define CAFERENAMEPRESETNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F14290)
#define CAFERENAMEPRESETNETWORKTASK_SET_PRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1F142A0)
#define CAFERENAMEPRESETNETWORKTASK_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0x1F142B0)
#define CAFERENAMEPRESETNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F142C0)
#define CAFERENAMEPRESETNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F144D0)
#define CAFERENAMEPRESETNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F144E0)
#define CAFERENAMEPRESETNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F14570)
#define CAFERENAMEPRESETNETWORKTASK_GET_PRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1F14580)
#define CAFERENAMEPRESETNETWORKTASK_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0x1F14590)

	inline static constexpr unsigned int CafeRenamePresetNetworkTask_TypeDefinitionIndex = 2050;

	class CafeRenamePresetNetworkTask : public Il2CppObject
	{
	public:
		::FlatData::CafePresetType* _PresetType_k__BackingField; // 0x40
		::System::Int32 _SlotId_k__BackingField; // 0x44
		::System::String* _PresetName_k__BackingField; // 0x48

		::System::String* get_PresetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFERENAMEPRESETNETWORKTASK_GET_PRESETNAME_OFFSET))(nullptr);
		}

		::System::Void set_PresetName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CAFERENAMEPRESETNETWORKTASK_SET_PRESETNAME_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFERENAMEPRESETNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_PresetType(::FlatData::CafePresetType* arg)
		{
			((::System::Void(*)(::FlatData::CafePresetType*, ::PVOID))((::PBYTE)hIl2Cpp + CAFERENAMEPRESETNETWORKTASK_SET_PRESETTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SlotId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFERENAMEPRESETNETWORKTASK_GET_SLOTID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAFERENAMEPRESETNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFERENAMEPRESETNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFERENAMEPRESETNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFERENAMEPRESETNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::FlatData::CafePresetType* get_PresetType()
		{
			return ((::FlatData::CafePresetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFERENAMEPRESETNETWORKTASK_GET_PRESETTYPE_OFFSET))(nullptr);
		}

		::System::Void set_SlotId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAFERENAMEPRESETNETWORKTASK_SET_SLOTID_OFFSET))(arg, nullptr);
		}

	};

