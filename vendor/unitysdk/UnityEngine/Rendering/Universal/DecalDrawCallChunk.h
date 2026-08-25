#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWCALLCHUNK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA03CD00)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWCALLCHUNK_REMOVEATSWAPBACK_OFFSET UNITYSDK_OFFSET(0xA03CD90)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWCALLCHUNK_SET_SUBCALLCOUNT_OFFSET UNITYSDK_OFFSET(0xA03CE30)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWCALLCHUNK_GET_SUBCALLCOUNT_OFFSET UNITYSDK_OFFSET(0xA03CE40)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWCALLCHUNK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA03CE50)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWCALLCHUNK_SETCAPACITY_OFFSET UNITYSDK_OFFSET(0xA03CE60)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalDrawCallChunk_TypeDefinitionIndex = 32604;

	class DecalDrawCallChunk : public Il2CppObject
	{
	public:
		Il2CppObject* decalToWorlds; // 0x28
		Il2CppObject* normalToDecals; // 0x38
		Il2CppObject* subCalls; // 0x48
		Il2CppObject* subCallCounts; // 0x58

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWCALLCHUNK_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void RemoveAtSwapBack(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWCALLCHUNK_REMOVEATSWAPBACK_OFFSET))(arg, nullptr);
		}

		::System::Void set_subCallCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWCALLCHUNK_SET_SUBCALLCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_subCallCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWCALLCHUNK_GET_SUBCALLCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWCALLCHUNK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWCALLCHUNK_SETCAPACITY_OFFSET))(arg, nullptr);
		}

	};
}

