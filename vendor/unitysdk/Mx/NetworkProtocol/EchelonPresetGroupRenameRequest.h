#pragma once
#include "../../unitysdk.h"

namespace FlatData { class EchelonExtensionType; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF42720)
#define MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMEREQUEST_GET_PRESETGROUPLABEL_OFFSET UNITYSDK_OFFSET(0xF42730)
#define MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42740)
#define MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMEREQUEST_SET_EXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0xF42750)
#define MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMEREQUEST_SET_PRESETGROUPLABEL_OFFSET UNITYSDK_OFFSET(0xF42760)
#define MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMEREQUEST_SET_PRESETGROUPINDEX_OFFSET UNITYSDK_OFFSET(0xF42770)
#define MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMEREQUEST_GET_EXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0xF42780)
#define MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMEREQUEST_GET_PRESETGROUPINDEX_OFFSET UNITYSDK_OFFSET(0xF42790)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EchelonPresetGroupRenameRequest_TypeDefinitionIndex = 11637;

	class EchelonPresetGroupRenameRequest : public Il2CppObject
	{
	public:
		::System::Int32 _PresetGroupIndex_k__BackingField; // 0x40
		::FlatData::EchelonExtensionType* _ExtensionType_k__BackingField; // 0x44
		::System::String* _PresetGroupLabel_k__BackingField; // 0x48

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::String* get_PresetGroupLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMEREQUEST_GET_PRESETGROUPLABEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ExtensionType(::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMEREQUEST_SET_EXTENSIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_PresetGroupLabel(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMEREQUEST_SET_PRESETGROUPLABEL_OFFSET))(str, nullptr);
		}

		::System::Void set_PresetGroupIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMEREQUEST_SET_PRESETGROUPINDEX_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonExtensionType* get_ExtensionType()
		{
			return ((::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMEREQUEST_GET_EXTENSIONTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_PresetGroupIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONPRESETGROUPRENAMEREQUEST_GET_PRESETGROUPINDEX_OFFSET))(nullptr);
		}

	};
}

