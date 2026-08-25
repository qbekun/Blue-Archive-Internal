#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }

#define MX_MINIGAMESHOOTING_AREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1451F20)
#define MX_MINIGAMESHOOTING_AREA_TOVECTOR3_OFFSET UNITYSDK_OFFSET(0x1451F30)
#define MX_MINIGAMESHOOTING_AREA_TOVECTOR2_OFFSET UNITYSDK_OFFSET(0x1451F50)
#define MX_MINIGAMESHOOTING_AREA_GETCONTAINSCHARACTERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_MINIGAMESHOOTING_AREA_GETCENTER_OFFSET UNITYSDK_OFFSET(0x1451F60)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int Area_TypeDefinitionIndex = 15001;

	class Area : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* Offset; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_AREA_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* ToVector3(::UnityEngine::Vector2* arg)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_AREA_TOVECTOR3_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* ToVector2(::UnityEngine::Vector3* arg)
		{
			return ((::UnityEngine::Vector2*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_AREA_TOVECTOR2_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetContainsCharacters(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2)
		{
			return ((Il2CppObject*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_AREA_GETCONTAINSCHARACTERS_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector3* GetCenter(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_AREA_GETCENTER_OFFSET))(arg, arg2, nullptr);
		}

	};
}

