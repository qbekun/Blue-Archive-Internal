#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Texture3D; }

#define DATALOCATION_CLEANUP_OFFSET UNITYSDK_OFFSET(0x9F80D80)

	inline static constexpr unsigned int DataLocation_TypeDefinitionIndex = 33787;

	class DataLocation : public Il2CppObject
	{
	public:
		::UnityEngine::Texture3D* TexL0_L1rx; // 0x10
		::UnityEngine::Texture3D* TexL1_G_ry; // 0x18
		::UnityEngine::Texture3D* TexL1_B_rz; // 0x20
		::UnityEngine::Texture3D* TexL2_0; // 0x28
		::UnityEngine::Texture3D* TexL2_1; // 0x30
		::UnityEngine::Texture3D* TexL2_2; // 0x38
		::UnityEngine::Texture3D* TexL2_3; // 0x40
		::System::Int32 width; // 0x48
		::System::Int32 height; // 0x4C
		::System::Int32 depth; // 0x50

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DATALOCATION_CLEANUP_OFFSET))(nullptr);
		}

	};

