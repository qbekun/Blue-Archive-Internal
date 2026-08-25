#pragma once
#include "unitysdk.h"

#define MEMBERDESCRIPTORCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x9B75BE0)
#define MEMBERDESCRIPTORCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B75D00)
#define MEMBERDESCRIPTORCOMPARER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B75D10)

	inline static constexpr unsigned int MemberDescriptorComparer_TypeDefinitionIndex = 29520;

	class MemberDescriptorComparer : public Il2CppObject
	{
	public:
		MemberDescriptorComparer* Instance; // 0x0

		::System::Int32 Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MEMBERDESCRIPTORCOMPARER_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMBERDESCRIPTORCOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMBERDESCRIPTORCOMPARER_.CCTOR_OFFSET))(nullptr);
		}

	};

