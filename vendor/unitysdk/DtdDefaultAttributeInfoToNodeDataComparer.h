#pragma once
#include "unitysdk.h"

#define DTDDEFAULTATTRIBUTEINFOTONODEDATACOMPARER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x996B7F0)
#define DTDDEFAULTATTRIBUTEINFOTONODEDATACOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x996B840)
#define DTDDEFAULTATTRIBUTEINFOTONODEDATACOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x996BBC0)
#define DTDDEFAULTATTRIBUTEINFOTONODEDATACOMPARER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x996BBD0)

	inline static constexpr unsigned int DtdDefaultAttributeInfoToNodeDataComparer_TypeDefinitionIndex = 27697;

	class DtdDefaultAttributeInfoToNodeDataComparer : public Il2CppObject
	{
	public:
		Il2CppObject* s_instance; // 0x0

		Il2CppObject* get_Instance()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + DTDDEFAULTATTRIBUTEINFOTONODEDATACOMPARER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Int32 Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + DTDDEFAULTATTRIBUTEINFOTONODEDATACOMPARER_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DTDDEFAULTATTRIBUTEINFOTONODEDATACOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DTDDEFAULTATTRIBUTEINFOTONODEDATACOMPARER_.CCTOR_OFFSET))(nullptr);
		}

	};

