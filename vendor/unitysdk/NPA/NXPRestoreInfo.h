#pragma once
#include "../unitysdk.h"

#define NPA_NXPRESTOREINFO_GET_SERVICEPAYLOAD_OFFSET UNITYSDK_OFFSET(0x9BCD2D0)
#define NPA_NXPRESTOREINFO_SET_SERVICEPAYLOAD_OFFSET UNITYSDK_OFFSET(0x9BCD2E0)
#define NPA_NXPRESTOREINFO_GET_META_OFFSET UNITYSDK_OFFSET(0x9BCD2F0)
#define NPA_NXPRESTOREINFO_SET_META_OFFSET UNITYSDK_OFFSET(0x9BCD300)
#define NPA_NXPRESTOREINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BCD310)
#define NPA_NXPRESTOREINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCD3C0)

namespace NPA
{
	inline static constexpr unsigned int NXPRestoreInfo_TypeDefinitionIndex = 25670;

	class NXPRestoreInfo : public Il2CppObject
	{
	public:
		Il2CppObject* servicePayload; // 0x10
		Il2CppObject* meta; // 0x18

		Il2CppObject* get_ServicePayload()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPRESTOREINFO_GET_SERVICEPAYLOAD_OFFSET))(nullptr);
		}

		::System::Void set_ServicePayload(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPRESTOREINFO_SET_SERVICEPAYLOAD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Meta()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPRESTOREINFO_GET_META_OFFSET))(nullptr);
		}

		::System::Void set_Meta(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPRESTOREINFO_SET_META_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPRESTOREINFO_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPRESTOREINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

