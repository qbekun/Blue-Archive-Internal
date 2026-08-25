#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

#define RAILPOINTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2173DF0)
#define RAILPOINTINFO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x2173E50)
#define RAILPOINTINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2173FA0)
#define RAILPOINTINFO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x2174170)
#define RAILPOINTINFO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x2173FB0)

	inline static constexpr unsigned int RailPointInfo_TypeDefinitionIndex = 4032;

	class RailPointInfo : public Il2CppObject
	{
	public:
		::System::Boolean UseTableData; // 0x10
		::UnityEngine::Vector3* Position; // 0x14
		::System::Single MinCameraDistance; // 0x20
		::System::Single MaxCameraDistance; // 0x24
		::UnityEngine::Vector3* CameraForward; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAILPOINTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, RailPointInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, RailPointInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + RAILPOINTINFO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAILPOINTINFO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, RailPointInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, RailPointInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + RAILPOINTINFO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAILPOINTINFO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};

