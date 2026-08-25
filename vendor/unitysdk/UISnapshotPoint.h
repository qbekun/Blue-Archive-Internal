#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Texture2D; }

#define UISNAPSHOTPOINT_START_OFFSET UNITYSDK_OFFSET(0x20761D0)
#define UISNAPSHOTPOINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2076240)

	inline static constexpr unsigned int UISnapshotPoint_TypeDefinitionIndex = 146;

	class UISnapshotPoint : public Il2CppObject
	{
	public:
		::System::Boolean isOrthographic; // 0x18
		::System::Single nearClip; // 0x1C
		::System::Single farClip; // 0x20
		::System::Int32 fieldOfView; // 0x24
		::System::Single orthoSize; // 0x28
		::UnityEngine::Texture2D* thumbnail; // 0x30

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISNAPSHOTPOINT_START_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISNAPSHOTPOINT_.CTOR_OFFSET))(nullptr);
		}

	};

