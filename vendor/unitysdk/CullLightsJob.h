#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal { class DeferredTiler; }

#define CULLLIGHTSJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0ABA60)

	inline static constexpr unsigned int CullLightsJob_TypeDefinitionIndex = 32847;

	class CullLightsJob : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::Internal::DeferredTiler* tiler; // 0x10
		Il2CppObject* prePunctualLights; // 0x88
		Il2CppObject* coarseTiles; // 0x98
		Il2CppObject* coarseTileHeaders; // 0xA8
		::System::Int32 coarseHeaderOffset; // 0xB8
		::System::Int32 istart; // 0xBC
		::System::Int32 iend; // 0xC0
		::System::Int32 jstart; // 0xC4
		::System::Int32 jend; // 0xC8

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CULLLIGHTSJOB_EXECUTE_OFFSET))(nullptr);
		}

	};

