#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CLANAPPLICATLISTRESPONSEMESSAGE_SET_CLANAPPLICATDBS_OFFSET UNITYSDK_OFFSET(0x1F253F0)
#define CLANAPPLICATLISTRESPONSEMESSAGE_GET_CLANAPPLICATDBS_OFFSET UNITYSDK_OFFSET(0x1F25400)
#define CLANAPPLICATLISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F25080)

	inline static constexpr unsigned int ClanApplicatListResponseMessage_TypeDefinitionIndex = 2163;

	class ClanApplicatListResponseMessage : public Il2CppObject
	{
	public:
		Il2CppObject* _ClanApplicatDBs_k__BackingField; // 0x20

		::System::Void set_ClanApplicatDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANAPPLICATLISTRESPONSEMESSAGE_SET_CLANAPPLICATDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ClanApplicatDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANAPPLICATLISTRESPONSEMESSAGE_GET_CLANAPPLICATDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANAPPLICATLISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

