#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CAFEREMOVEFURNITURERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F13A10)
#define CAFEREMOVEFURNITURERESPONSEMESSAGE_SET_REMOVEDSERVERIDS_OFFSET UNITYSDK_OFFSET(0x1F13A50)
#define CAFEREMOVEFURNITURERESPONSEMESSAGE_GET_REMOVEDSERVERIDS_OFFSET UNITYSDK_OFFSET(0x1F13A60)

	inline static constexpr unsigned int CafeRemoveFurnitureResponseMessage_TypeDefinitionIndex = 2045;

	class CafeRemoveFurnitureResponseMessage : public Il2CppObject
	{
	public:
		Il2CppObject* _RemovedServerIds_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEREMOVEFURNITURERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_RemovedServerIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEREMOVEFURNITURERESPONSEMESSAGE_SET_REMOVEDSERVERIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RemovedServerIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEREMOVEFURNITURERESPONSEMESSAGE_GET_REMOVEDSERVERIDS_OFFSET))(nullptr);
		}

	};

