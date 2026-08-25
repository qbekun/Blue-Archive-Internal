#pragma once
#include "unitysdk.h"

#define TRANSIENTBUILDDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xA19BA80)
#define TRANSIENTBUILDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA19E460)

	inline static constexpr unsigned int TransientBuildData_TypeDefinitionIndex = 36264;

	class TransientBuildData : public Il2CppObject
	{
	public:
		Il2CppObject* trackList; // 0x10
		Il2CppObject* clipList; // 0x18
		Il2CppObject* markerList; // 0x20

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSIENTBUILDDATA_CLEAR_OFFSET))(nullptr);
		}

		TransientBuildData* Create()
		{
			return (return (TransientBuildData*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSIENTBUILDDATA_CREATE_OFFSET))(nullptr);
		}

	};

