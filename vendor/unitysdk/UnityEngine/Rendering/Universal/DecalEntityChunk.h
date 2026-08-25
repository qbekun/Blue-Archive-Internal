#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Jobs { class TransformAccessArray; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYCHUNK_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0xA03F090)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYCHUNK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA03F120)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYCHUNK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA03F130)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYCHUNK_REMOVEATSWAPBACK_OFFSET UNITYSDK_OFFSET(0xA03F1A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYCHUNK_PUSH_OFFSET UNITYSDK_OFFSET(0xA03F230)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalEntityChunk_TypeDefinitionIndex = 32611;

	class DecalEntityChunk : public Il2CppObject
	{
	public:
		::UnityEngine::Material* material; // 0x28
		Il2CppObject* decalEntities; // 0x30
		::Il2CppArray<::System::Object*>* decalProjectors; // 0x40
		::UnityEngine::Jobs::TransformAccessArray* transformAccessArray; // 0x48

		::System::Void SetCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYCHUNK_SETCAPACITY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYCHUNK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYCHUNK_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void RemoveAtSwapBack(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYCHUNK_REMOVEATSWAPBACK_OFFSET))(arg, nullptr);
		}

		::System::Void Push()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYCHUNK_PUSH_OFFSET))(nullptr);
		}

	};
}

