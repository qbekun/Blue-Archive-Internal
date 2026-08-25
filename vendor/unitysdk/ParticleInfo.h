#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
class Particle;

#define PARTICLEINFO_COPYPROPERTIES_OFFSET UNITYSDK_OFFSET(0x209EE00)
#define PARTICLEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x209EE80)

	inline static constexpr unsigned int ParticleInfo_TypeDefinitionIndex = 3523;

	class ParticleInfo : public Il2CppObject
	{
	public:
		::System::Single Damping; // 0x10
		::System::Single Elasticity; // 0x14
		::System::Single Stiffness; // 0x18
		::System::Single Inert; // 0x1C
		::System::Single Radius; // 0x20
		::System::Int32 ParentIndex; // 0x24
		::System::Int32 ChildIndex; // 0x28
		::System::Int32 IsExtraBone; // 0x2C
		::UnityEngine::Vector3* InitLocalPosition; // 0x30
		::UnityEngine::Quaternion* InitLocalRotation; // 0x3C

		::System::Void CopyProperties(Particle* arg)
		{
			((::System::Void(*)(Particle*, ::PVOID))((::PBYTE)hIl2Cpp + PARTICLEINFO_COPYPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEINFO_INIT_OFFSET))(nullptr);
		}

	};

