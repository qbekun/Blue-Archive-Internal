#pragma once
#include "../unitysdk.h"

namespace Animancer { class FastComparer; }

#define ANIMANCER_FASTCOMPARER_SYSTEM.COLLECTIONS.GENERIC.IEQUALITYCOMPARER_SYSTEM.OBJECT_.GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x48E080)
#define ANIMANCER_FASTCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x48E0B0)
#define ANIMANCER_FASTCOMPARER_SYSTEM.COLLECTIONS.GENERIC.IEQUALITYCOMPARER_SYSTEM.OBJECT_.EQUALS_OFFSET UNITYSDK_OFFSET(0x48E0C0)
#define ANIMANCER_FASTCOMPARER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x48E0D0)

namespace Animancer
{
	inline static constexpr unsigned int FastComparer_TypeDefinitionIndex = 35084;

	class FastComparer : public Il2CppObject
	{
	public:
		::Animancer::FastComparer* Instance; // 0x0

		::System::Int32 System.Collections.Generic.IEqualityComparer_System.Object_.GetHashCode(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTCOMPARER_SYSTEM.COLLECTIONS.GENERIC.IEQUALITYCOMPARER_SYSTEM.OBJECT_.GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTCOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.Generic.IEqualityComparer_System.Object_.Equals(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTCOMPARER_SYSTEM.COLLECTIONS.GENERIC.IEQUALITYCOMPARER_SYSTEM.OBJECT_.EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_FASTCOMPARER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

