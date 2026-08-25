#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONTENTSAVEDISCARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41520)
#define MX_NETWORKPROTOCOL_CONTENTSAVEDISCARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41530)
#define MX_NETWORKPROTOCOL_CONTENTSAVEDISCARDREQUEST_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xF41540)
#define MX_NETWORKPROTOCOL_CONTENTSAVEDISCARDREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF41550)
#define MX_NETWORKPROTOCOL_CONTENTSAVEDISCARDREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF41560)
#define MX_NETWORKPROTOCOL_CONTENTSAVEDISCARDREQUEST_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xF41570)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ContentSaveDiscardRequest_TypeDefinitionIndex = 11583;

	class ContentSaveDiscardRequest : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x40
		::System::Int64 _StageUniqueId_k__BackingField; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSAVEDISCARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSAVEDISCARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSAVEDISCARDREQUEST_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSAVEDISCARDREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSAVEDISCARDREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSAVEDISCARDREQUEST_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

	};
}

