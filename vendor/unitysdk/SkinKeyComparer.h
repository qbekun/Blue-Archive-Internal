#pragma once
#include "unitysdk.h"

#define SKINKEYCOMPARER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x95DF740)
#define SKINKEYCOMPARER_SYSTEM.COLLECTIONS.GENERIC.IEQUALITYCOMPARER_SPINE.SKIN.SKINKEY_.EQUALS_OFFSET UNITYSDK_OFFSET(0x95DF7D0)
#define SKINKEYCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95DF7C0)
#define SKINKEYCOMPARER_SYSTEM.COLLECTIONS.GENERIC.IEQUALITYCOMPARER_SPINE.SKIN.SKINKEY_.GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x95DF7F0)

	inline static constexpr unsigned int SkinKeyComparer_TypeDefinitionIndex = 35068;

	class SkinKeyComparer : public Il2CppObject
	{
	public:
		SkinKeyComparer* Instance; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKINKEYCOMPARER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.Generic.IEqualityComparer_Spine.Skin.SkinKey_.Equals(SkinKey* arg, SkinKey* arg)
		{
			return (return (::System::Boolean(*)(SkinKey*, SkinKey*, ::PVOID))((::PBYTE)hIl2Cpp + SKINKEYCOMPARER_SYSTEM.COLLECTIONS.GENERIC.IEQUALITYCOMPARER_SPINE.SKIN.SKINKEY_.EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKINKEYCOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 System.Collections.Generic.IEqualityComparer_Spine.Skin.SkinKey_.GetHashCode(SkinKey* arg)
		{
			return (return (::System::Int32(*)(SkinKey*, ::PVOID))((::PBYTE)hIl2Cpp + SKINKEYCOMPARER_SYSTEM.COLLECTIONS.GENERIC.IEQUALITYCOMPARER_SPINE.SKIN.SKINKEY_.GETHASHCODE_OFFSET))(arg, nullptr);
		}

	};

