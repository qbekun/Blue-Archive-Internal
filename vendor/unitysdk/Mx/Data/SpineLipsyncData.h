#pragma once
#include "../../unitysdk.h"

#define MX_DATA_SPINELIPSYNCDATA_GET_OFFSET UNITYSDK_OFFSET(0x195EC50)
#define MX_DATA_SPINELIPSYNCDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x195ECC0)
#define MX_DATA_SPINELIPSYNCDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x195ECD0)
#define MX_DATA_SPINELIPSYNCDATA_GET_REPOSITORY_OFFSET UNITYSDK_OFFSET(0x195EDA0)
#define MX_DATA_SPINELIPSYNCDATA_SET_REPOSITORY_OFFSET UNITYSDK_OFFSET(0x195EDB0)

namespace MX::Data
{
	inline static constexpr unsigned int SpineLipsyncData_TypeDefinitionIndex = 16412;

	class SpineLipsyncData : public Il2CppObject
	{
	public:
		LipsyncDataRepository* _Repository_k__BackingField; // 0x28

		Il2CppObject* Get(::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SPINELIPSYNCDATA_GET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SPINELIPSYNCDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SPINELIPSYNCDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		LipsyncDataRepository* get_Repository()
		{
			return (return (LipsyncDataRepository*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SPINELIPSYNCDATA_GET_REPOSITORY_OFFSET))(nullptr);
		}

		::System::Void set_Repository(LipsyncDataRepository* arg)
		{
			((::System::Void(*)(LipsyncDataRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SPINELIPSYNCDATA_SET_REPOSITORY_OFFSET))(arg, nullptr);
		}

	};
}

