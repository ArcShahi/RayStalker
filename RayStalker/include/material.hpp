#ifndef MATERIAL_HPP
#define MATERIAL_HPP
#include <glm/vec3.hpp>

struct Material
{
	glm::vec3 Albedo{ 1.0f };
	glm::vec3 EmissionColor{ 0.0f };
	float roughness{1.0};
	float metallic{ 0.0f };
	float EmissionPower{ 0.0f };

	glm::vec3 GetEmission()const { return EmissionColor * EmissionPower; }
};
#endif // !MATERIAL_HPP
