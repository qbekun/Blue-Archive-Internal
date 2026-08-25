#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::VFX { class VFXExpressionValues; }

#define UNITYENGINE_VFX_VFXEXPRESSIONVALUES_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A7F40)
#define UNITYENGINE_VFX_VFXEXPRESSIONVALUES_CREATEEXPRESSIONVALUESWRAPPER_OFFSET UNITYSDK_OFFSET(0xA4A7F50)

namespace UnityEngine::VFX
{
	inline static constexpr unsigned int VFXExpressionValues_TypeDefinitionIndex = 37920;

	class VFXExpressionValues : public Il2CppObject
	{
	public:
		::System::Int32 m_Ptr; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXEXPRESSIONVALUES_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::VFX::VFXExpressionValues* CreateExpressionValuesWrapper(::System::Int32 arg)
		{
			return (return (::UnityEngine::VFX::VFXExpressionValues*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXEXPRESSIONVALUES_CREATEEXPRESSIONVALUESWRAPPER_OFFSET))(arg, nullptr);
		}

	};
}

