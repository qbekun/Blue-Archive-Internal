#pragma once
#include "../../../unitysdk.h"

class IPropertySetter;
namespace UnityEngine { class ParticleSystem; }

#define MX_LOGIC_BATTLES_CUSTOMPARTICLESHADERPROPERTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1275630)
#define MX_LOGIC_BATTLES_CUSTOMPARTICLESHADERPROPERTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x12756B0)
#define MX_LOGIC_BATTLES_CUSTOMPARTICLESHADERPROPERTY_DOEVENT_OFFSET UNITYSDK_OFFSET(0x1275730)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int CustomParticleShaderProperty_TypeDefinitionIndex = 14072;

	class CustomParticleShaderProperty : public Il2CppObject
	{
	public:
		IPropertySetter* setter; // 0x10
		::System::Int32 PropertyID; // 0x18

		::System::Void .ctor(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CUSTOMPARTICLESHADERPROPERTY_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CUSTOMPARTICLESHADERPROPERTY_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void DoEvent(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CUSTOMPARTICLESHADERPROPERTY_DOEVENT_OFFSET))(arg, nullptr);
		}

	};
}

