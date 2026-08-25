#pragma once
#include "../unitysdk.h"

namespace Animancer { class FastReferenceComparer; }

#define ANIMANCER_FASTREFERENCECOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x48E150)
#define ANIMANCER_FASTREFERENCECOMPARER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x48E160)
#define ANIMANCER_FASTREFERENCECOMPARER_SYSTEM.COLLECTIONS.GENERIC.IEQUALITYCOMPARER_SYSTEM.OBJECT_.GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x48E1E0)
#define ANIMANCER_FASTREFERENCECOMPARER_SYSTEM.COLLECTIONS.GENERIC.IEQUALITYCOMPARER_SYSTEM.OBJECT_.EQUALS_OFFSET UNITYSDK_OFFSET(0x48E210)

namespace Animancer
{
	inline static constexpr unsigned int FastReferenceComparer_TypeDefinitionIndex = 35085;

	class FastReferenceComparer : public Il2CppObject
	{
	public:
		::Animancer::FastReferenceComparer* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTREFERENCECOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTREFERENCECOMPARER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 System.Collections.Generic.IEqualityComparer_System.Object_.GetHashCode(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTREFERENCECOMPARER_SYSTEM.COLLECTIONS.GENERIC.IEQUALITYCOMPARER_SYSTEM.OBJECT_.GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Collections.Generic.IEqualityComparer_System.Object_.Equals(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTREFERENCECOMPARER_SYSTEM.COLLECTIONS.GENERIC.IEQUALITYCOMPARER_SYSTEM.OBJECT_.EQUALS_OFFSET))(arg, arg, nullptr);
		}

	};
}

