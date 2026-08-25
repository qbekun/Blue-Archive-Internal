#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CLANSEARCHLISTRESPONSEMESSAGE_GET_CLANDBS_OFFSET UNITYSDK_OFFSET(0x1F2A3B0)
#define CLANSEARCHLISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F29FD0)
#define CLANSEARCHLISTRESPONSEMESSAGE_SET_CLANDBS_OFFSET UNITYSDK_OFFSET(0x1F2A3C0)

	inline static constexpr unsigned int ClanSearchListResponseMessage_TypeDefinitionIndex = 2199;

	class ClanSearchListResponseMessage : public Il2CppObject
	{
	public:
		Il2CppObject* _ClanDBs_k__BackingField; // 0x20

		Il2CppObject* get_ClanDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSEARCHLISTRESPONSEMESSAGE_GET_CLANDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANSEARCHLISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_ClanDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANSEARCHLISTRESPONSEMESSAGE_SET_CLANDBS_OFFSET))(arg, nullptr);
		}

	};

