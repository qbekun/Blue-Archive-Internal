#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDREMOVEFROMCAMERATARGETFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12F4180)
#define GROUNDCOMMANDREMOVEFROMCAMERATARGETFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12F4E10)
#define GROUNDCOMMANDREMOVEFROMCAMERATARGETFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12F4E60)

	inline static constexpr unsigned int GroundCommandRemoveFromCameraTargetFormatter_TypeDefinitionIndex = 14198;

	class GroundCommandRemoveFromCameraTargetFormatter : public ::System::Collections::ObjectModel::ReadOnlyDictionary`2
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDREMOVEFROMCAMERATARGETFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandRemoveFromCameraTarget&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandRemoveFromCameraTarget&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDREMOVEFROMCAMERATARGETFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandRemoveFromCameraTarget&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandRemoveFromCameraTarget&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDREMOVEFROMCAMERATARGETFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

