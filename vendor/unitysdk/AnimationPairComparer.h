#pragma once
#include "unitysdk.h"

#define ANIMATIONPAIRCOMPARER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x95A2DE0)
#define ANIMATIONPAIRCOMPARER_SYSTEM.COLLECTIONS.GENERIC.IEQUALITYCOMPARER_SPINE.ANIMATIONSTATEDATA.ANIMATIONPAIR_.GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x95A2E70)
#define ANIMATIONPAIRCOMPARER_SYSTEM.COLLECTIONS.GENERIC.IEQUALITYCOMPARER_SPINE.ANIMATIONSTATEDATA.ANIMATIONPAIR_.EQUALS_OFFSET UNITYSDK_OFFSET(0x95A2ED0)
#define ANIMATIONPAIRCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A2E60)

	inline static constexpr unsigned int AnimationPairComparer_TypeDefinitionIndex = 35004;

	class AnimationPairComparer : public Il2CppObject
	{
	public:
		AnimationPairComparer* Instance; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONPAIRCOMPARER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 System.Collections.Generic.IEqualityComparer_Spine.AnimationStateData.AnimationPair_.GetHashCode(AnimationPair* arg)
		{
			return (return (::System::Int32(*)(AnimationPair*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONPAIRCOMPARER_SYSTEM.COLLECTIONS.GENERIC.IEQUALITYCOMPARER_SPINE.ANIMATIONSTATEDATA.ANIMATIONPAIR_.GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Collections.Generic.IEqualityComparer_Spine.AnimationStateData.AnimationPair_.Equals(AnimationPair* arg, AnimationPair* arg)
		{
			return (return (::System::Boolean(*)(AnimationPair*, AnimationPair*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONPAIRCOMPARER_SYSTEM.COLLECTIONS.GENERIC.IEQUALITYCOMPARER_SPINE.ANIMATIONSTATEDATA.ANIMATIONPAIR_.EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONPAIRCOMPARER_.CTOR_OFFSET))(nullptr);
		}

	};

