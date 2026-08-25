#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_GROUNDCOMMANDREMOVEFROMCAMERATARGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x12F3590)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDREMOVEFROMCAMERATARGET_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12F35E0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDREMOVEFROMCAMERATARGET_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12F3F00)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDREMOVEFROMCAMERATARGET_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12F41C0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDREMOVEFROMCAMERATARGET_.CCTOR_OFFSET UNITYSDK_OFFSET(0x12F4E00)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandRemoveFromCameraTarget_TypeDefinitionIndex = 14199;

	class GroundCommandRemoveFromCameraTarget : public Il2CppObject
	{
	public:
		Il2CppObject* EntityCommandIds; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDREMOVEFROMCAMERATARGET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandRemoveFromCameraTarget&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandRemoveFromCameraTarget&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDREMOVEFROMCAMERATARGET_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDREMOVEFROMCAMERATARGET_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandRemoveFromCameraTarget&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandRemoveFromCameraTarget&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDREMOVEFROMCAMERATARGET_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDREMOVEFROMCAMERATARGET_.CCTOR_OFFSET))(nullptr);
		}

	};
}

