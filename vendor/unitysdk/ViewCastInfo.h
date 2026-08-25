#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

#define VIEWCASTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xD8ECF0)

	inline static constexpr unsigned int ViewCastInfo_TypeDefinitionIndex = 9705;

	class ViewCastInfo : public Il2CppObject
	{
	public:
		::System::Boolean hit; // 0x10
		::UnityEngine::Vector3* point; // 0x14
		::System::Single dst; // 0x20
		::System::Single angle; // 0x24

		::System::Void .ctor(::System::Boolean arg, ::UnityEngine::Vector3* arg2, ::System::Single arg3, ::System::Single arg4)
		{
			((::System::Void(*)(::System::Boolean, ::UnityEngine::Vector3*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + VIEWCASTINFO_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

