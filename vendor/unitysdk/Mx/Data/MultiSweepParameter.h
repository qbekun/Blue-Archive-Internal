#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }

#define MX_DATA_MULTISWEEPPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1856BD0)
#define MX_DATA_MULTISWEEPPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1856BE0)
#define MX_DATA_MULTISWEEPPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1856C20)

namespace MX::Data
{
	inline static constexpr unsigned int MultiSweepParameter_TypeDefinitionIndex = 15869;

	class MultiSweepParameter : public Il2CppObject
	{
	public:
		Il2CppObject* EventContentId; // 0x10
		::FlatData::ContentType* ContentType; // 0x20
		::System::Int64 StageId; // 0x28
		::System::Int32 SweepCount; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTISWEEPPARAMETER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::ContentType* arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTISWEEPPARAMETER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::FlatData::ContentType* arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::ContentType*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MULTISWEEPPARAMETER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

